// New median.h
#ifndef GUARD_median_h
#define GUARD_median_h

#include <algorithm>
#include <stdexcept>
#include <vector>

using namespace std;
// vector<double>의 중앙값을 구함.
// 함수를 호출하면 인수로 제공된 백터를 통째로 복사
template<class T>
T median(vector<T> v) {
	typedef typename vector<T>::size_type vec_sz;
	vec_sz = v.size();

	if (size == 0)
		throw domain_error("median of empty vector!");

	sort(v.begin(), v.end()); //<algorithm> 필요
	vec_sz mid = size / 2;

	return size % 2 == 0 ?
		(v[mid] + v[mid - 1] / 2) :
		v[mid];
}

#endif