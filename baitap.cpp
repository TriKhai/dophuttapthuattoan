#include "stdio.h"
#include "math.h"

//O(nlogn)
long int s1 (int n, int r) {
	long int s = 0;
	for (int i = 0; i <= n; i++)
		s += pow(r, i);
	return s;
}

//O(logn)
long int s2 (int n, int r) {
    return (pow(r, n+1) - 1)/(r-1);
}

//O(n)
long int s3 (int n, int r) {
    long int s = 1, t = 1;
    for( int i = 1; i <= n ; i++){
                    t *= r;
                    s += t;
                }
    return s;
}

// //O(n^2)
// long int s4 (int n, int r) {
//     long int s = 0;
//     for( int i = 0; i <= n ; i++){
//         long int t = 1;
//         for( int j = 0; j < i; j++){
//             t *= r;
//         }
//         s += t;
//    }
//     return s;
// }

//O(n^2)
long int s4 (int n, int r) {
    long int s = 0, t = 1;
    for( int i = 0; i <= n ; i++){
        for( int j = 0; j < i; j++){
            t *= r;
        }
        s += t;
        t = 1;
   }
    return s;
}

//t�o lao O(n)
int sum (int n, int r) {
	int t = 1;
	for( int i = 0; i <= n; i++){
		t*=r;
	}
	return (t-1)/(r-1);
}

//...

int main(){
	printf("%ld\n", s1(2, 5)); //o(nlogn)
	printf("%ld\n", s2(2, 5)); //o(log(n))
	printf("%ld\n", s3(2, 5)); //o(n)
	printf("%ld\n", s4(2, 5)); //o(n^2)
	//...
    return 0;
}

