#include<bits/stdc++.h>
using namespace std;

// Pairs
void explainPair() {

	cout << "********* Pairs *********" << endl;

	pair<int, int> p = {1, 3};

	// prints 1, 3
	cout << p.first << " " << p.second << endl;

	pair<int, pair<int, int>> pp = {1, {3, 4}};

	// prints 1 4 3
	cout << pp.first << " " << pp.second.second << " " << pp.second.first << endl;

	pair<int, int> pArr [] = {{1, 2}, {2, 5}, {5, 1}};

	// prints 5
	cout << pArr[1].second << endl;
}

// Vector
void explainVector() {

	cout << "********* Vectors *********" << endl;

	vector<int> v; // {}

	v.push_back(1); // {1}
	v.emplace_back(2); // {1, 2}

	vector<pair<int, int>> vp;

	vp.push_back({1, 2});
	vp.emplace_back(1, 2);

	// Vector of size 5
	// everyone as 100
	vector<int> vec(5, 100); // {100, 100, 100, 100, 100}

	// A vector of size 5
	// initialized with 0
	// might take some garbage value
	// dependent on the vector

	vector<int> v1(5); //{0, 0, 0, 0, 0}

	vector<int> v2(5, 20); // {20, 20, 20, 20, 20};

	vector<int> v3(v2); // {20, 20, 20, 20, 20}

	// Take the vector to be {10, 20, 30, 40}
	vector<int>:: iterator it = v.begin(); // v.cbegin() and v.cend() if you don't want to mutate the iterator

	it++;
	cout << *(it) << endl; // prints 20

	it = it + 2;
	cout << *(it) << endl; // prints 30

	// vector<int>::iterator ite = v.end(); // points to a memory address after 40
	// vector<int>::iterator itre = v.rend(); // points to a memory address before 10
	// vector<int>::iterator itrb = v.rbegin(); // points to exact 40

	cout << v[0] << " " << v.at(0) << endl;

	cout << v.back() << endl; // gets the last element

	// Ways to print the vector

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *(it) << " ";
	}

	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *(it) << " ";
	}

	for (auto it : v) {
		cout << it << " ";
	}

	// Erase Function

	// {10, 20, 12, 23}
	v.erase(v.begin());

	// {10, 20, 12, 23, 35}
	// v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35}

	// Insert Function
	vector<int> vect(2, 100); // {100, 100}
	vect.insert(vect.begin(), 300); // {300, 100, 100}
	vect.insert(vect.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

	vector<int> copy(2, 50); // {50, 50}
	vect.insert(vect.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

	// {10, 10}
	cout << vect.size(); // 2

	// {10, 20}

	vect.pop_back(); // {10}

	// v1 -> {10, 20}
	// v2 -> {30, 40}

	// v1.swap(v2); // v1 -> {30, 40} v2 -> {10, 20}

	vect.clear(); // erases the entire vector

	cout << vect.empty() << endl;
}

// List
void explainList() {

	cout << "********* Lists *********" << endl;

	list<int> ls;

	ls.push_back(2); // {2}
	ls.emplace_back(4); // {2, 4}

	ls.push_front(5); // {5, 2, 4}
	ls.emplace_front(3); // {3, 5, 2, 4}

	for (auto it : ls)
		cout << it << " ";
	cout << endl;
	// rest functions are same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
}

// Deque
void explainDeque() {

	cout << "********* Deque *********" << endl;

	deque<int> dq;
	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1, 2}

	dq.push_front(4); // {4, 1, 2}
	dq.emplace_front(3); // {3, 4, 1, 2}

	dq.pop_back(); // {3, 4, 1}
	dq.pop_front(); // {4, 1}

	cout << dq.back() << endl;
	cout << dq.front() << endl;

	// rest functions are same as vectors
	// begin, end, rbegin, rend, clear, insert, size, swap
}

// Stack
void explainStack() {
	// Last in last out (LIFO)

	cout << "********* Stack *********" << endl;

	stack<int> st;
	st.push(1); // {1}
	st.push(2); // {2, 1}
	st.push(3); // {3, 2, 1}
	st.push(3); // {3, 3, 2, 1}

	st.emplace(5); // {5, 3, 3, 2, 1}

	cout << st.top() << endl; // 5 "** st[2] is invalid **"
	st.pop(); // {3, 3, 2, 1}

	cout << st.top() << endl; // 3

	cout << st.size() << endl;

	cout << st.empty() << endl;

	stack<int> st1, st2;
	st1.swap(st2);

}

// Queue
void explainQueue() {

	cout << "********* Queue *********" << endl;

	// First in first out (FIFO)
	queue<int> q;
	q.push(1); // {1}
	q.push(2); // {1, 2}
	q.emplace(4); // {1, 2, 4}

	q.back() += 5;

	cout << q.back() << endl; // 9

	// {1, 2, 9}
	cout << q.front() << endl; // 1

	q.pop();

	cout << q.front() << endl; // 2

	// size, swap, empty functions are same as stack
}

// Priority Queue
void explainPQ() {

	cout << "********* Priority Queue *********" << endl;

	priority_queue<int> pq;

	pq.push(5); // {5}
	pq.push(2); // {5, 2}
	pq.push(8); // {8, 5, 2}
	pq.emplace(10); // {10, 8, 5, 2}

	cout << pq.top() << endl; // 10

	pq.pop(); // {8, 5, 2}

	cout << pq.top() << endl; // 8

	// size, swap and empty functions are same as others

	// Minimum Heap (Minimum element on the front)
	priority_queue<int, vector<int>, greater<int>> mpq;
	mpq.push(5); // {5}
	mpq.push(2); // {2, 5}
	mpq.push(8); // {2, 5, 8}
	mpq.emplace(10); // {2, 5, 8, 10}

	cout << mpq.top() << endl; // 2

}

// Set
void explainSet() {
	cout << "********* Set *********" << endl;

	set<int> s;
	s.insert(1); // {1}
	s.emplace(2); // {1, 2}
	s.insert(2); // {1, 2}
	s.insert(4); // {1, 2, 4}
	s.insert(3); // {1, 2, 3, 4}

	// Functionality of insert in vector
	// can be used also, that only increases
	// efficiency

	// begin(), end(), rbegin(), rend(), size(),
	// empty() and swap() are same as those of above

	// {1, 2, 3, 4, 5}

	auto it = s.find(3); // returns iterator pointing to 3
	auto it2 = s.find(6); // returns iterator pointing the memory after end

	// Check if element is in the set or not
	// if (s.find(3) != s.end()) // element present

	// {1, 4, 5}
	s.erase(5); // erases 5 takes logarithmic time

	int cnt = s.count(1);

	auto it3 = s.find(3);
	s.erase(it); // takes the constant time

	// {1, 2, 3, 4, 5}
	auto itr1 = s.find(2);
	auto itr2 = s.find(4);
	s.erase(itr1, itr2); // after erase {1, 4, 5} [first, last)

	for (auto x : s)
		cout << x << " ";

	cout << endl;
	// lower_bound() and upper_bound() function works in the same way
	// as in vector it does.

	// This is the syntax
	auto iter1 = s.lower_bound(2);
	auto iter2 = s.upper_bound(3);
}

// Multi Set
void explainMultiSet() {
	cout << "********* Multi Set *********" << endl;

	// Everything same as set
	// only stores duplicate elements also

	multiset<int>ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}

	// ms.erase(1); // all 1's erased

	int cnt = ms.count(1);

	// only a single one erased
	ms.erase(ms.find(1));

	// ms.erase(ms.find(1), ms.find(1) + 2);

	for (auto x : ms)
		cout << x << " ";

	cout << endl;

	// rest all function same as set

}

void explainUSet() {
	unordered_set<int> st;
	// lower_bound and upper_bound function
	// does not works, rest all functions are same
	// as above,  it does not stores in any
	// particular order it has a better complexity
	// than set in most cases, except some when collision happens
}

void explainMap() {
	cout << "********* Map *********" << endl;

	// {key, value}
	map<int, int> mpp;
	map<int, pair<int, int>> mpp1;
	map< pair<int, int>, int > mpp2;

	// Key and values can be anything

	mpp[1] = 2;
	mpp.emplace(3, 1);
	mpp.insert({2, 4});

	mpp2[ {2, 3}] = 10;

	for (auto it : mpp2) {
		cout << it.first.first << " " << it.first.second << " : " << it.second << endl;
	}

	cout << mpp[1] << endl; // 2
	cout << mpp[5] << endl; // 0 as it does not exists

	auto it = mpp.find(1); // points to the position where 3 is found
	// cout << *(it).second << endl;

	auto it1 = mpp.find(5); // points to the end of map since 5 is not there

	// lower_bound() and upper_bound() function works in the same way
	// as in vector it does.

	// auto it = mpp.lower_bound(2);
	// auto it = mpp.upper_bound(3);

	// erase, swap, size, empty, are same as above

}

void explainMultimap() {
	// everything same as map, only it can store multiple keys
	// only mpp[key] cannot be used here
}


void explainUnorderedMap() {
	// same as set and unordered_Set difference.
	// Optimised for time complexity but handle with care
}

bool comp(pair<int, int>p1, pair<int, int>p2) {
	if (p1.second < p2.second) {
		return true;
	} else if (p1.second == p2.second) {
		if (p1.first > p2.second) return true;
	}
	return false;
}

void explainExtra() {
	cout << "********* Extras *********" << endl;

	// sort(a+2, a+4); // [first, last)
	// sort(a, a+n, greater<int>)

	pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

	// sort it according to second element
	// if second element is same, then sort
	// it according to first element but in descending

	sort(a, a + 2 , comp);

	// {4,1}, {2, 1}, {1, 2}};

	int num = 7; // Binary- 111
	int cnt = __builtin_popcount(num);

	long long ll = 165786578687;
	int cnt1 = __builtin_popcountll(ll);

	cout << cnt << " " << cnt1 << endl;

	string s = "123";

	do {
		cout << s << endl;
	} while (next_permutation(s.begin(), s.end())); // Doesn't work for arrays


	int arr[] = { 1, 45, 54, 71, 76, 12 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int maxi = *max_element(arr, arr + n);
	cout << maxi;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	explainPair();
	explainVector();
	explainList();
	explainDeque();
	explainStack();
	explainQueue();
	explainPQ();
	explainSet();
	explainMultiSet();
	explainMap();
	explainExtra();

	return 0;
}
