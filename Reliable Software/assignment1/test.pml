#define N 5

int x = 10;

active proctype increment(){ 
	do 
	:: x < N -> x++;
	od
}

active proctype decrement(){ 
	do 
	:: x > 0 -> x--;
	od
}

active proctype reset(){ 
	do 
	:: x == N -> x = 0;
	od
}

active proctype check(){ 
	assert(x>=0 && x<=N)
}