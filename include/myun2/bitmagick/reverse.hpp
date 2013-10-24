#ifndef __github_com_myun2__bitmagick__reverse_HPP__
#define __github_com_myun2__bitmagick__reverse_HPP__

namespace myun2
{
	namespace bitmagick
	{
		template <typename T>
		T reverse(const T& in) { return ~in; }
	}
}

#endif//__github_com_myun2__bitmagick__reverse_HPP__
