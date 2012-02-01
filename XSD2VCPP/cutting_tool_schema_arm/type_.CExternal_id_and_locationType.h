#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_id_and_locationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_id_and_locationType



namespace cutting_tool_schema_arm
{

class CExternal_id_and_locationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CExternal_id_and_locationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CExternal_id_and_locationType(CExternal_id_and_locationType const& init);
	void operator=(CExternal_id_and_locationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CExternal_id_and_locationType); }
	MemberElement<CExternal_file_id_and_location, _altova_mi_altova_CExternal_id_and_locationType_altova_External_file_id_and_location> External_file_id_and_location;
	struct External_file_id_and_location { typedef Iterator<CExternal_file_id_and_location> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_id_and_locationType
