# <center><font face="宋体" color=orange>1.5 Internet结构和ISP</font></center>    
![](https://vip4.yunpng.top/2025/11/10/691198185773b.png)  
那么如何将给定的数百万ISPs互联到一起?
如果只是简单的两两连接,考虑到成本和性能,不现实..

ISP之间的连接:
![ISP之间的连接](https://vip4.yunpng.top/2025/11/10/69119d7f76964.png)   

将每个接入ISP都连接到全局ISP(全局范围内覆盖),客户ISPs和提供者ISPs有经济合约。但是，如果全局 ISP 是可行的业务，那会有竞争者有利可图，一定会有竞争，通过 ISP 之间的合作可以完成业务的扩展，肯定会有互联，对等互联的结算关系,产生IXP(Internet exchange point),… 然后业务会细分（全球接入和区域接入），区域网络将出现，用与将接入 ISPs 连接到全局 ISPs,产生regional net，然后内容提供商网络（Internet Content Providers, e.g., Google, Microsoft, Akamai）可能会构建它们自己的网络，将它们的服务、内容更加靠近端用户，向用户提供更好的服务，减少自己的运营支出。
![互联网结构](https://vip4.yunpng.top/2025/11/10/69119b083bf7e.png)  
![互联网结构](https://vip4.yunpng.top/2025/11/10/69119b70d957a.png)  
![互联网结构](https://vip4.yunpng.top/2025/11/10/69119ba792731.png)   
![互联网结构](https://vip4.yunpng.top/2025/11/10/69119c19728d6.png)  
![互联网结构](https://vip4.yunpng.top/2025/11/10/69119c34e1c96.png)   

由此可见，一个分组要经过许多网络！  
由于费用和性能等因素，很多内容提供商(如Google，Akamai)可能会部署自己的网络，连接自己的在各地的DC(数据中心)，连接若干local ISP和各级(包括一层)ISP,更加靠近用户。

