class StackOneQueue {
queue<int> q;
public:
void push(int x){
int sz = q.size();
q.push(x);
for(int i=0;i<sz;i++){
q.push(q.front()); q.pop();
}
}
void pop(){ if(!q.empty()){ cout<<"Popped: "<<q.front()<<endl; q.pop(); } }
};
