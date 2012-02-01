#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_system
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_system



namespace cutting_tool_schema_arm
{

class CClassification_system : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CClassification_system(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CClassification_system(CClassification_system const& init);
	void operator=(CClassification_system const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CClassification_system); }

	MemberAttribute<string_type,_altova_mi_altova_CClassification_system_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CClassification_system_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDescriptionType4, _altova_mi_altova_CClassification_system_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType4> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CClassification_system_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_system
