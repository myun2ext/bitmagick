#ifndef __github_com_myun2__bitmagick__filled_HPP__
#define __github_com_myun2__bitmagick__filled_HPP__

namespace myun2
{
	namespace bitmagick
	{
		template <typename T>
		T filled() { return reverse<T>(zero<T>()); }
	}
}

#endif//__github_com_myun2__bitmagick__filled_HPP__
