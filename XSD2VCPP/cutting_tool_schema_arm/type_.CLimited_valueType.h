#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLimited_valueType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLimited_valueType



namespace cutting_tool_schema_arm
{

class CLimited_valueType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CLimited_valueType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CLimited_valueType(CLimited_valueType const& init);
	void operator=(CLimited_valueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CLimited_valueType); }
	MemberElement<CNumerical_value, _altova_mi_altova_CLimited_valueType_altova_Numerical_value> Numerical_value;
	struct Numerical_value { typedef Iterator<CNumerical_value> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLimited_valueType
