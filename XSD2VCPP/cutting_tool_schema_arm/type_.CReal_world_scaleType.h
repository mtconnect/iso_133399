#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CReal_world_scaleType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CReal_world_scaleType



namespace cutting_tool_schema_arm
{

class CReal_world_scaleType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CReal_world_scaleType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CReal_world_scaleType(CReal_world_scaleType const& init);
	void operator=(CReal_world_scaleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CReal_world_scaleType); }
	MemberElement<CNumerical_value, _altova_mi_altova_CReal_world_scaleType_altova_Numerical_value> Numerical_value;
	struct Numerical_value { typedef Iterator<CNumerical_value> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CReal_world_scaleType
