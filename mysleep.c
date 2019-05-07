unsigned int mysleep(unsigned int seconds)
{
	int ret;
	struct sigaction newact, oldact;
	sigset_t newmask, oldmask, suspmask;
	unsigned int unslept;

	newact.sa_handler = catch_sigalrm;
	sigemptyset(&newact.sa_mask);
	newact.sa_flags = 0;
	ret = sigaction(SIGALRM, &newact, &oldact);
	if (ret == -1) {
		sys_err("sigaction error", 1); 
	}   
	sigemptyset(&newmask);
	sigaddset(&newmask, SIGALRM);
	sigprocmask(SIG_BLOCK, &newmask, &oldmask);

	alarm(seconds);

	suspmask = oldmask;
	sigdelset(&suspmask, SIGALRM);
	ret = sigsuspend(&suspmask);  //主动挂起，等信号
	if (ret == -1 && errno == EINTR) {
		printf("pause success\n");
	}   
     
	unslept = alarm(0);
	sigaction(SIGALRM, &oldact, NULL);  //恢复SIGALRM信号旧有的处理方式。
	return unslept;
}