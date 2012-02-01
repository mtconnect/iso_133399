#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty



namespace cutting_tool_schema_arm
{

class CProperty : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CProperty(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CProperty(CProperty const& init);
	void operator=(CProperty const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CProperty); }

	MemberAttribute<string_type,_altova_mi_altova_CProperty_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CProperty_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAllowed_unitType, _altova_mi_altova_CProperty_altova_Allowed_unit> Allowed_unit;
	struct Allowed_unit { typedef Iterator<CAllowed_unitType> iterator; };
	MemberElement<CDescriptionType21, _altova_mi_altova_CProperty_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType21> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CProperty_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CProperty_sourceType, _altova_mi_altova_CProperty_altova_Property_source> Property_source;
	struct Property_source { typedef Iterator<CProperty_sourceType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CProperty_altova_Property_type> Property_type;
	struct Property_type { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CProperty_altova_Version_id> Version_id;
	struct Version_id { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty
