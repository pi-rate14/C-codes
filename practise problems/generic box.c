template<class T> g_Box<T>::g_Box() {
    first=-1;
    mid=-1;
    last=-1;
    no_Of_Ele=0;
    ele= new T[20];
}
template<class T> g_Box<T>::g_Box(int) {}
template<class T> bool g_Box<T>::isEmpty() {
    if(first==-1)f
        return true;
    else
        return false;
}
template<class T> bool g_Box<T>::isFull() {
    if(no_Of_Ele==10)
        return true;
    else
        return false;
}
template<class T> void g_Box<T>::insert_First(T n) {
    if(!isFull()) {
        for(int i=no_Of_Ele++; i>0; i++)
            ele[i]=ele[i-1];
        ele[0]=n;
        first=0;
        last++;
        mid=last/2;
    }
}
template<class T> void g_Box<T>::insert_Last(T n) {
    if(!isFull()) {
        ele[no_Of_Ele++]=n;
        last++;
        first=0;
        mid=last/2;
    }
}
template<class T> void g_Box<T>::insert_Mid(T n) {
    if(!isFull()) {
        for(int i=no_Of_Ele; i>mid; i++)
            ele[i]=ele[i-1];
        first=0;
        last++;
        mid=last/2;
    }
}
template<class T> void g_Box<T>::delete_First() {
    if(!isEmpty()) {
        if(last)
            for(int i=0; i<no_Of_Ele-1; i++)
                ele[i]=ele[i+1];
        no_Of_Ele--;
        last--;
        mid=last/2;
        if(!no_Of_Ele) {
            first=-1;
            mid=-1;
        }
    }
}
template<class T> void g_Box<T>::delete_Last() {
    if(!isEmpty()) {
        no_Of_Ele--;
        last--;
        mid=last/2;
        if(!no_Of_Ele) {
            first=-1;
            mid=-1;
        }
    }
}
template<class T> void g_Box<T>::delete_Mid() {
    if(!isEmpty()) {
        if(last)
            for(int i=mid; i<no_Of_Ele-1; i++)
                ele[i]=ele[i+1];
        no_Of_Ele--;
        last--;
        mid=last/2;
        if(!no_Of_Ele) {
            first=-1;
            mid=-1;
        }
    }
}
template<class T> void g_Box<T>::print() {
    for(int i=0; i<no_Of_Ele; i++)
        cout<<ele[i]<<endl;
}
