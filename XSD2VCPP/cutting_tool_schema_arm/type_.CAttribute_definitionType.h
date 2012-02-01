#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAttribute_definitionType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAttribute_definitionType



namespace cutting_tool_schema_arm
{

class CAttribute_definitionType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAttribute_definitionType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAttribute_definitionType(CAttribute_definitionType const& init);
	void operator=(CAttribute_definitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAttribute_definitionType); }
	MemberElement<CProperty, _altova_mi_altova_CAttribute_definitionType_altova_Property> Property;
	struct Property { typedef Iterator<CProperty> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAttribute_definitionType
