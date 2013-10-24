#ifndef __github_com_myun2__bitmagick__shift_HPP__
#define __github_com_myun2__bitmagick__shift_HPP__

namespace myun2
{
	namespace bitmagick
	{
		template <typename T>
		T shift(const T& v, int count) { return v << count; }

		template <typename T>
		T lshift(const T& v, int count) { return v << count; }
		template <typename T>
		T rshift(const T& v, int count) { return v >> count; }
	}
}

#endif//__github_com_myun2__bitmagick__shift_HPP__
