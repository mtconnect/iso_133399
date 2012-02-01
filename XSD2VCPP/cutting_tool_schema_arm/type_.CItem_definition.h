#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_definition
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_definition



namespace cutting_tool_schema_arm
{

class CItem_definition : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CItem_definition(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CItem_definition(CItem_definition const& init);
	void operator=(CItem_definition const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CItem_definition); }

	MemberAttribute<string_type,_altova_mi_altova_CItem_definition_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CItem_definition_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_item_versionType, _altova_mi_altova_CItem_definition_altova_Associated_item_version> Associated_item_version;
	struct Associated_item_version { typedef Iterator<CAssociated_item_versionType> iterator; };
	MemberElement<CContextsType, _altova_mi_altova_CItem_definition_altova_Contexts> Contexts;
	struct Contexts { typedef Iterator<CContextsType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CItem_definition_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CNameType, _altova_mi_altova_CItem_definition_altova_Name> Name;
	struct Name { typedef Iterator<CNameType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_definition
