#ifndef SEARCH_CPP_H
#define SEARCH_CPP_H

namespace SearchCpp
{

	template<class T>
	long LinearSearch( T* l, T* r, T val )
	{
		for( T* i = l; i < r; i++ )
		{
			if( *i == val )
			{
				return std::distance( l, i );
			}
		}
		return -1;
	}

	// Input array must be sorted!
	template<class T>
	long BinarySearch( T* l, T* r, T val )
	{
		T *cl = l, *cr = r, *m;
		while( cl <= cr )
		{
			m = cl + ( cr - cl ) / 2;

			if( *m == val )
			{
				return std::distance( l, m );
			}
			else if( val < *m )
			{
				cr = m - 1;
			}
			else
			{
				cl = m + 1;
			}
		}

		return -1;
	}

}

#endif // SEARCH_CPP_H
