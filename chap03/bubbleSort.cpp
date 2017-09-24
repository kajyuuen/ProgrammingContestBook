#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 100;

void bubbleSort(int A[], int N){
  bool flag = 1; // cppのboolってtrue/falseじゃないのか
  
  for( int i = 0; flag; i++){
    flag = 0;
    for( int j = N - 1; j >= i + 1; j-- ){
      if( A[j] < A[j-1] ){
	int tmp = A[j]; // swapがあるらしいです
	A[j] = A[j-1];
	A[j-1] = tmp;
	flag = 1;
      }
    }
  }
}

int main(){
  int A[MAX], N;

  cin >> N;
  for( int i = 0; i < N; i++ ) cin >> A[i];

  bubbleSort(A, N);

  for( int i = 0; i < N; i++ ){
    if(i > 0) cout << " ";
    cout << A[i];
  }
  cout << endl;
  
  return 0;
}
