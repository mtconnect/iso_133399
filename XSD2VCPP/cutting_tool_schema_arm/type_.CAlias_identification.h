#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAlias_identification
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAlias_identification



namespace cutting_tool_schema_arm
{

class CAlias_identification : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAlias_identification(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAlias_identification(CAlias_identification const& init);
	void operator=(CAlias_identification const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAlias_identification); }

	MemberAttribute<string_type,_altova_mi_altova_CAlias_identification_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CAlias_identification_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CAlias_identification_altova_Alias_id> Alias_id;
	struct Alias_id { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CAlias_scopeType, _altova_mi_altova_CAlias_identification_altova_Alias_scope> Alias_scope;
	struct Alias_scope { typedef Iterator<CAlias_scopeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CAlias_identification_altova_Alias_version_id> Alias_version_id;
	struct Alias_version_id { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CDescriptionType, _altova_mi_altova_CAlias_identification_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType> iterator; };
	MemberElement<CIs_applied_toType, _altova_mi_altova_CAlias_identification_altova_Is_applied_to> Is_applied_to;
	struct Is_applied_to { typedef Iterator<CIs_applied_toType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAlias_identification
