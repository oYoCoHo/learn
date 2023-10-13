iOS崩溃crash大解析
https://code84.com/285062.html
https://www.ab62.cn/article/31373.html
https://toutiao.io/posts/ye5mtm/preview
https://cloud.tencent.com/developer/article/1808126

SIGSEGV 访问了非法的地址(地址还没有从系统映射到当前进程的内存空间), 一般是野指针导致, 而野指针一般由于多线程操作对象导致.
SIGABRT 一般是Exception或者其他的代码主动退出的问题.
SIGTRAP 代码里面触发了调试指令, 该指令可能由编译器提供的trap方法触发, 如'__builtin_trap()'
SIGBUS 一般由于地址对齐问题导致, 单纯的OC代码挺难触发的, 主要是系统库方法或者其他c实现的方法导致
SIGILL 表示执行了非法的cpu指令, 但是一般是由于死循环导致




GCD线程锁崩溃
Thread 39: EXC_BAD_INSTRUCTION (code=EXC_I386_INVOP, subcode=0x0)

对dispatch_semaphore_signal的调用必须与wait()的调用相匹配。试图销毁一个value低于初始化value值的信号将会导致一个EXC_BAD_INSTRUCTION错误。
https://www.jianshu.com/p/f66c44e6c892

https://blog.51cto.com/u_15069438/3832742
