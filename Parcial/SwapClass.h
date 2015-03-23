
template <class TIPUS>
void swap(TIPUS& a, TIPUS& b)
{
	TIPUS tmp = b;
	b = a;
	a = tmp;
}

#define MIN(a,b)(a<b ? a:b);
#define MAX(a,b)(a>b ? a:b);
