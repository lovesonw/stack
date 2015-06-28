#include <iostream>
#include <stack>

using namespace std;

int main()
{

	stack<int> Stack;//定义一个栈
	for(int i=0; i<10; i++)
		Stack.push(i);
	while(!Stack.empty())
	{
		cout<<Stack.top()<<endl;
		Stack.pop();
	}
	cout<<Stack.size()<<endl;
	return 0;
}
