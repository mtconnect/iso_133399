#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCreationType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCreationType2



namespace cutting_tool_schema_arm
{

class CCreationType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCreationType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCreationType2(CCreationType2 const& init);
	void operator=(CCreationType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCreationType2); }
	MemberElement<CDocument_creation_property, _altova_mi_altova_CCreationType2_altova_Document_creation_property> Document_creation_property;
	struct Document_creation_property { typedef Iterator<CDocument_creation_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCreationType2
