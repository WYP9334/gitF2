#自上向下建立关系树，自下向上执行命令
#根据修改时间比目标新，确定更新
#如果目标不依赖任何条件，则执行对应命令，以示更新
#
#目标：依赖（条件）
#	命令
#阶段一
#app:add.c sub.c dive.c mul.c main.c
#	gcc add.c sub.c dive.c mul.c main.c -o app
#
 
#阶段二
#app:add.o sub.o dive.o mul.o main.o
#	gcc add.o sub.o dive.o mul.o main.o -o app

#add.o:add.c
#	gcc -c add.c
#sub.o:sub.c
#	gcc -c sub.c
#dive.o:dive.c
#	gcc -c dive.c
#mul.o:mul.c
#	gcc -c mul.c
#main.o:main.c
#	gcc -c main.c

#阶段三
# $@表示目标，$^表示所有依赖，$<表示依赖中的第一个
#obj=add.o sub.o mul.o dive.o main.o
#src = $(wildcard *.c)
#obj = $(patsubst %.c,%.o,$(src))
#target = app

#$(target):$(obj)
#	gcc $^ -o $@

#%.o:%.c
#	gcc -c $< -o $@
 

#阶段四
#make -C 指定目录  进入指定目录，调用里面的Makefile
CPPFLAGS= -Iinclude
CFLAGS= -g -Wall
LDFLAGS= 
CC=gcc
#CC=arm-linux-gcc

src = $(wildcard *.c)
#文件名处理函数
#把$(src)里面所有.c文件都替换成.o文件，注意并没有生成.o文件
obj = $(patsubst %.c,%.o,$(src))
target = app

$(target):$(obj)
	$(CC) $^ $(LDFLAGS) -o $@
# $@表示目标，$^表示所有依赖，$<表示依赖中的第一个 //自动化变量
%.o:%.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@
#.PHONY是一个伪目标，可以防止在Makefile中定义的只执行命令的目标和
#工作目录下的实际文件出现名字冲突，另一种是提高执行Makefile时的效率。
#单词phony (即phoney)的意思是：伪造的，假的。
.PHONY:clean
 
#彻底清除生生过程文件
clean:
#Makefile会检查命令的返回值，非零则出错返回
#"-rm"中的‘-’会继续执行后续的命令，-f强制删除，就算没有文件可删也不报错。
	-rm -f *.o
	-rm -f app

#彻底清除生生过程文件和生成配置文件
distclean:
	rm /usr/bin/app
install:
	cp app  /usr/bin


test:
#‘@’不显示命令本身，只显示结果
	@echo $(src)
	@echo $(obj)
