

iOS中Objective-C&Swift知识点梳理
https://zhuanlan.zhihu.com/p/228790924

iOS Socket编程入门指北
https://blog.csdn.net/pwf2006/article/details/126217622?spm=1001.2101.3001.6650.3&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-3-126217622-blog-129842859.235%5Ev38%5Epc_relevant_sort_base1&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-3-126217622-blog-129842859.235%5Ev38%5Epc_relevant_sort_base1&utm_relevant_index=6

iOS网络编程
https://www.jianshu.com/p/b4a7251f6e4c

iOS即时通讯，从入门到“放弃”？（socket代码）
https://github.com/tuyaohui/IM_iOS/tree/master/iOS即时通讯，从入门到“放弃”？
https://zhuanlan.zhihu.com/p/615568589?utm_id=0


面试知识点
https://github.com/iOS-Mayday/heji

《iOS网络高级编程》

内存缓存
NSCache
YYMemoryCache，缓存淘汰算法：LRU 算法来淘汰使用频率较低的缓存；


MLeaksFinder：腾讯开源的 iOS 平台的自动内存泄漏检测工具

多线程可以提高系统资源利用率，但是开启多线程需要花费时间（90微妙）和空间（0.5兆），开启的线程过多，CPU频繁的在多个线程中调度会消耗大量的CPU资源，会导致个别线程无法完成任务而假死，并且容易造成数据同步和死锁的问题，所以不要在系统中同时开启过多的子线程。
