#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDefinitionType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDefinitionType2



namespace cutting_tool_schema_arm
{

class CDefinitionType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDefinitionType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDefinitionType2(CDefinitionType2 const& init);
	void operator=(CDefinitionType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDefinitionType2); }
	MemberElement<CProperty, _altova_mi_altova_CDefinitionType2_altova_Property> Property;
	struct Property { typedef Iterator<CProperty> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDefinitionType2
