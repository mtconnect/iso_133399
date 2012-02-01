#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCreationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCreationType



namespace cutting_tool_schema_arm
{

class CCreationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCreationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCreationType(CCreationType const& init);
	void operator=(CCreationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCreationType); }
	MemberElement<CDocument_creation_property, _altova_mi_altova_CCreationType_altova_Document_creation_property> Document_creation_property;
	struct Document_creation_property { typedef Iterator<CDocument_creation_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCreationType
