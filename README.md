# README
> 大话设计模式（C++实现）

## 目录

* 简单工厂模式
* 策略模式
* 单一职责原则
* 开放封闭原则
* 依赖倒转原则
* 装饰模式
* 代理模式
* 工厂模式
* 原型模式
* 模板方法模式
* 迪米特法则
* 外观模式
* 建造者模式
* 观察者模式
* 抽象工厂模式
* 状态模式

## 第一章：简单工厂模式

* 计算器

## 第二章：策略模式
* 商场促销

## 第六章：装饰模式
* 穿衣服
特点：动态地给一个对象添加一些额外的指责，就增加功能来说，比子类灵活。
把类中的装饰功能从类中移除，简化原有的类。
* 类图

<img src="/Users/dllttx/Documents/learning/DesignMode/decorator/Decorator.svg" alt="Decorator" style="zoom:67%;" />

## 第八章：工厂方法模式
* 学雷锋
优点：完全OCP，解决类简单工厂模式不但对扩展开放，对修改也开放的缺点
缺点：每加一个产品，就要一个产品工厂类，增加了开发工作量

## 第九章：原型模式

* 简单代码结构
* 不用重新初始化对象，而是动态地获得对象运行时的状态。

## 第十章： 模板方法模式

* 代码：考试试卷
* TemplateMethod：定义一个操作中算法的骨架，将一些步骤延迟到子类中，使得子类可以不改变一个算法的结构即可重定义该算法中的某些特定步骤。
* 优点：去除子类中的重复代码；提供了一个很好的代码复用平台。

## 第十三章：建造者模式

* 代码：builder
* 建造者模式（生成器模式）将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。
* Builer：为创建一个Product对象的各个部件指定的抽象接口。
* ConcreteBuilder：具体建造者，构建和装配各个部件。
* Director：构建一个使用Builder接口的对象。

## 第十四章：观察者模式

* 代码：observer
* 观察者模式（发布-订阅模式）
* 升级：委托事件技术

## 第十五章：抽象工厂模式

* Abstract Factory：提供一个创建一系列相关或相互依赖对象的接口，而无需指定它们具体的类。
* 改进：简单工厂+反射+配置文件（参考google/fruit）

## 第十六章：状态模式

* 代码：state
* State：当一个对象的内在状态改变时允许改变其行为，这个对象看起来像是改变了其类。
* 去掉if、switch等大量条件判断语句。