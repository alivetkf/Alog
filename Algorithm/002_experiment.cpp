// 社会财富分配实验
// 一开始有n个人，每人有100元
// 每一轮:
// 每个人必须随机给别人1元钱(财富为0可以不给但可以接收)
// 试问:c轮后财富分布(以基尼系数为衡量指标)

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

//基尼系数计算器
double calculateGini(const vector<double>& wealth){
    int n=wealth.size();
    double sumOfWealth=accumulate(wealth.begin(),wealth.end(),0.0);
    double sumOfAbsoluteDifferences=0.0;

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            sumOfAbsoluteDifferences+=abs(wealth[i]-wealth[j]);
        }
    }
    return sumOfAbsoluteDifferences/(2.0*n*sumOfWealth);
}

//实验模拟 n人t轮
void experiment(int n,int t){
    vector<double> wealth(n,100.0);
    vector<bool> hasMoney(n);
    
    for(int round=0;round<t;++round){
        fill(hasMoney.begin(),hasMoney.end(),false);

        for(int i=0;i<n;++i){
            if(wealth[i]>0) hasMoney[i]=true;
        }

        for(int i=0;i<n;++i){
            if(hasMoney[i]){
                int other;
                do{
                    other=rand()%n;
                }while(other==i);
                
                wealth[i]-=1.0;
                wealth[other]+=1.0;
            }
        }
    }
    //财富矩阵 从贫穷到富有
    sort(wealth.begin(),wealth.end());

    cout<<"财富矩阵(贫穷到富有): "<<endl;
    for(int i=0;i<n;++i){
        cout<<static_cast<int>(wealth[i])<<" ";
        if(i%10==9) cout<<endl;
    }
    cout<<endl;

    cout<<fixed<<setprecision(6);
    cout<<"这个社会的基尼系数为: "<<calculateGini(wealth)<<endl;
}
int main(){
    srand(static_cast<unsigned>(time(nullptr)));//给随机数发生器播一粒当前时间的种子，
    //让每次运行结果都不一样

    cout << "一个社会的基尼系数是一个在0~1之间的小数" << endl;
    cout << "基尼系数为0代表所有人的财富完全一样" << endl;
    cout << "基尼系数为1代表有1个人掌握了全社会的财富" << endl;
    cout << "基尼系数越小，代表社会财富分布越均衡；越大则代表财富分布越不均衡" << endl;
    cout << "在2022年，世界各国的平均基尼系数为0.44" << endl;
    cout << "目前普遍认为，当基尼系数到达 0.5 时" << endl;
    cout << "就意味着社会贫富差距非常大，分布非常不均匀" << endl;
    cout << "社会可能会因此陷入危机，比如大量的犯罪或者经历社会动荡" << endl;
    cout << "测试开始" << endl;

    int n = 100;
    int t = 1'000'000;
    cout << "人数 : " << n << endl;
    cout << "轮数 : " << t << endl;

    experiment(n, t);

    cout << "测试结束" << endl;

    return 0;
}
