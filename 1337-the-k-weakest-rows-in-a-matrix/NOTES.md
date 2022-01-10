structure to sort pairs by given condition:
​
```cpp
struct compfunc{
constexpr bool operator()(const pair<int,int> &a, const pair<int,int> &b){
if(a.first != b.first)
return (a.first > b.first);
else return (a.second > b.second);
}
};
```
​
​