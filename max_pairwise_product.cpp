#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::max;
long long MaxPairwiseProduct(const vector<long long>& numbers) {

int n = numbers.size();
int index1=0;
	for (int i = 1; i < n; ++i) {
		if(numbers[i]>numbers[index1]){
			index1=i;}
	}
	int index2=0;
	if(index1==0)
	{ index2=1;};
	for (int j =1; j < n; ++j){
		if((numbers[j]>numbers[index2])&&(index1!=j)){
			index2=j;}
	}
return (numbers[index1]*numbers[index2]);
}

int main() {
int n;
cin >> n;
vector<long long> numbers(n);
for (int i = 0; i < n; ++i) {
cin >> numbers[i];
}
long long product = MaxPairwiseProduct(numbers);
cout << product << "\n";
return 0;
}