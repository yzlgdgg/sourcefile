#ifndef _CHINESE_H_
#define _CHINESE_H_

#define _CXX_               1

#if _CXX_
#define _BOOL               bool
#define _TRUE               true
#define _FALSE              false
#define 自动类型             auto


#define 命名空间            namespace
#define 内联                inline
#define 易变                mutable
#else
#define _BOOL               int
#define _TRUE               1
#define _FALSE              0
#endif

#define 无类型              void
#define 短整型              short int
#define 整数型              int
#define 长整数型            long int
#define 长长整数型          long long int
#define 单精浮点型          float
#define 双精浮点型          double
#define 布尔型              _BOOL
#define 字符型              char
#define 字符串(s)           char[s + 1]

#define 无符号              unsigned
#define 有符号              signed

#define 无符号短整型        unsigned short int
#define 无符号整数型        unsigned int
#define 无符号长整数型      unsigned long int  
#define 无符号长长整数型    unsigned long long int

#define 真                 _TRUE
#define 假                 _FALSE

#define 且                 &&
#define 或                 ||

#define 只读常量                const
#define 结构体              struct 
#define 共用体              union
#define 声明枚举            enum

#define 取内存长度(x)       sizeof(x)

// #define 指针                *
// #define 二级指针            **
// #define 三级指针            ***

#define 别名                typedef
#define 导入变量            extern
#define 导出变量            export
#define 变动的              volatile
#define 静态                static
#define 跳出                break
#define 开启下次循环        continue

#define 循环(x)             while(x)
#define 循环头             do{
#define 循环尾(x)          } while(x);

#define 判断(x)             if(x) 
#define 判断否定           else
#define 判断继续(x)        else if(x)
#define 跳转                goto
#define 开关                switch
#define 开关分支(x)        case (x):
#define 开关其他           default:

#define 返回                return 

#endif