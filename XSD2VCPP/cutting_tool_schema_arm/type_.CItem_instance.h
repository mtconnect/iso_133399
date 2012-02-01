#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_instance
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_instance



namespace cutting_tool_schema_arm
{

class CItem_instance : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CItem_instance(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CItem_instance(CItem_instance const& init);
	void operator=(CItem_instance const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CItem_instance); }

	MemberAttribute<string_type,_altova_mi_altova_CItem_instance_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CItem_instance_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDefinitionType, _altova_mi_altova_CItem_instance_altova_Definition> Definition;
	struct Definition { typedef Iterator<CDefinitionType> iterator; };
	MemberElement<CDescriptionType17, _altova_mi_altova_CItem_instance_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType17> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CItem_instance_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_instance
