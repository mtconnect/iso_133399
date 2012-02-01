#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CQuantified_instance
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CQuantified_instance

#include "type_.CItem_instance.h"


namespace cutting_tool_schema_arm
{

class CQuantified_instance : public ::cutting_tool_schema_arm::CItem_instance
{
public:
	cutting_tool_schema_arm_EXPORT CQuantified_instance(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CQuantified_instance(CQuantified_instance const& init);
	void operator=(CQuantified_instance const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CQuantified_instance); }
	MemberElement<CQuantityType, _altova_mi_altova_CQuantified_instance_altova_Quantity> Quantity;
	struct Quantity { typedef Iterator<CQuantityType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CQuantified_instance
