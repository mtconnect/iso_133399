#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPiecesType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPiecesType



namespace cutting_tool_schema_arm
{

class CPiecesType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPiecesType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPiecesType(CPiecesType const& init);
	void operator=(CPiecesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPiecesType); }
	MemberElement<CNumerical_value, _altova_mi_altova_CPiecesType_altova_Numerical_value> Numerical_value;
	struct Numerical_value { typedef Iterator<CNumerical_value> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPiecesType
