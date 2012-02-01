#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_file_id_and_location
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_file_id_and_location



namespace cutting_tool_schema_arm
{

class CExternal_file_id_and_location : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CExternal_file_id_and_location(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CExternal_file_id_and_location(CExternal_file_id_and_location const& init);
	void operator=(CExternal_file_id_and_location const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CExternal_file_id_and_location); }

	MemberAttribute<string_type,_altova_mi_altova_CExternal_file_id_and_location_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CExternal_file_id_and_location_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CExternal_file_id_and_location_altova_External_id> External_id;
	struct External_id { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CLocationType, _altova_mi_altova_CExternal_file_id_and_location_altova_Location> Location;
	struct Location { typedef Iterator<CLocationType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_file_id_and_location
