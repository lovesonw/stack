#include <iostream>
#include <stack>

using namespace std;

int main()
{

	stack<int> Stack;//����һ��ջ
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
