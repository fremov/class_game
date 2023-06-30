#include "Actor.h"
namespace Frem {

	std::string Actor::get_name()
	{
		return this->m_name;
	}
	void Actor::set_name(const std::string& name)
	{
		this->m_name = name;
	}

}