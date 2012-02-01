#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCommon_locationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCommon_locationType



namespace cutting_tool_schema_arm
{

class CCommon_locationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCommon_locationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCommon_locationType(CCommon_locationType const& init);
	void operator=(CCommon_locationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCommon_locationType); }
	MemberElement<CDocument_location_property, _altova_mi_altova_CCommon_locationType_altova_Document_location_property> Document_location_property;
	struct Document_location_property { typedef Iterator<CDocument_location_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCommon_locationType
