#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocationType



namespace cutting_tool_schema_arm
{

class CLocationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CLocationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CLocationType(CLocationType const& init);
	void operator=(CLocationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CLocationType); }
	MemberElement<CDocument_location_property, _altova_mi_altova_CLocationType_altova_Document_location_property> Document_location_property;
	struct Document_location_property { typedef Iterator<CDocument_location_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocationType
