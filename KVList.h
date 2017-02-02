//Shaun Richardson
//110392156
//Jan 30th 2017
//Workshop 4
//KVList.h

#pragma once


template <typename K, typename V, int SIZE>
class KVList
{
	K k;
	V v;
	size_t tableSize;

public:
	KVList() : tableSize(0) //default constructor - adopts a safe empty state
	{
	}

	size_t size() const
	{
		return tableSize;
	}

	const K& key(int i) const
	{
		if (i > 0 && i < tableSize)
		{
			return k[i];
		}
	}

	const V& value(int i) const
	{
		if (i > 0 && i < tableSize)
		{
			return v[i];
		}
	}

	KVList& add(const K& kk, const V& vv)
	{
		if (tableSize < SIZE)
		{
			k[tableSize] = kk;
			v[tableSize] = vv;
			tableSize++;
		}
		return *this;
	}

	int find(const K& kk) const
	{
		for (size_t i = 0; i < tableSize; i++)
			if (k[i] == kk)
				return i;
		return 0;
	}

	KVList& replace(int i, const K& kk, const V& vv)
	{
		if (i >= 0 && i < tableSize)
		{
			k[i] = kk;
			v[i] = vv;
		}
		return *this;
	}

}; //class KVList

