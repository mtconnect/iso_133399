#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_content_property
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_content_property



namespace cutting_tool_schema_arm
{

class CDocument_content_property : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_content_property(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_content_property(CDocument_content_property const& init);
	void operator=(CDocument_content_property const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_content_property); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_content_property_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_content_property_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_content_property_altova_Detail_level> Detail_level;
	struct Detail_level { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_content_property_altova_Geometry_type> Geometry_type;
	struct Geometry_type { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CLanguagesType, _altova_mi_altova_CDocument_content_property_altova_Languages> Languages;
	struct Languages { typedef Iterator<CLanguagesType> iterator; };
	MemberElement<CReal_world_scaleType, _altova_mi_altova_CDocument_content_property_altova_Real_world_scale> Real_world_scale;
	struct Real_world_scale { typedef Iterator<CReal_world_scaleType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_content_property
