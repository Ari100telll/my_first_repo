#include <bits/stdc++.h>
#include "Vecctorss.h"
#define n 5
using namespace std;
///int n,m;



int main(){
Vecctorss a;
InputMatrix(a);
}

/*void s(vector<int> &v,vector<int> &w ,int l,int r) {
    //cout << l << " " << r << "\n";
    int m = (l + r)/2;
    if(l!=r){
        s(v,w,l,m);
        s(v,w,m+1,r);
        int i = l;
        int k = l;
        int ii = m+1;
        for(int i = 0 ; i< v.size();i++){
            cout << v[i] << " ";
        }
      ///  cout << i << " " << ii<< " " << m << " " << r << " ++++++++++\n" ;
        while(i<m+1 && ii < r+1){
            if(v[i]<=v[ii]){
                w[k]=v[i];
                k++;
                i++;
            }
            else if(v[ii]<v[i]){
                w[k]=v[ii];
                k++;
                ii++;
            }
           /// else{cout << "fuuuuuuck";}
        }
        if(i<m+1){
            while(i!=m+1){
                w[k]=v[i];
                i++;
                k++;
            }
        }
        else if(ii<r+1){
            while(ii!=r+1){
                w[k]=v[ii];
                ii++;
                k++;
            }
        }
        for(int i = 0; i <= r;i++) {
            v[i] = w[i];
            ///cout << v[i] << " ";
        }
       /// cout << "\n--------\n";
    }
   ///if(l==r) cout << "!!!!!!!!!!!!!!";
}

void func(int (&a)[100][100]){
    vector<int> v(n);
    vector<int> w(n,0);
    for(int j = 0 ; j<m;j++){
        for(int i = 0 ; i < n;i++){
            v[i]=a[i][j];
        }
        s(v,w,0,n-1);
        for(int i = 0 ; i < n;i++){
            a[i][j]=v[i];
        }

    }
}

int main()
{
    cin >> n >> m;
    int a[100][100];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> a[i][j];
        }
    }
    func(a);
    cout << "\n";
       for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "------------\n";
    int ss=0;
    for(int i = 0 ; i< m;i++){
        cout << "S" << i+1 << " = " << a[n-1][i] << "\n" ;
        ss+=a[n-1][i];
    }
    cout << "------------\n" << ss;

    return 0;
}*/




/*
5 5
-12  7  23  13   4
 67 15  34  -5   9
   2   5 17 -23 45
 26 -6  23   -5 -9
 18 37  -8  26 12

*/
