#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_association_relationship
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_association_relationship



namespace cutting_tool_schema_arm
{

class CClassification_association_relationship : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CClassification_association_relationship(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CClassification_association_relationship(CClassification_association_relationship const& init);
	void operator=(CClassification_association_relationship const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CClassification_association_relationship); }

	MemberAttribute<string_type,_altova_mi_altova_CClassification_association_relationship_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CClassification_association_relationship_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CRelatedType2, _altova_mi_altova_CClassification_association_relationship_altova_Related> Related;
	struct Related { typedef Iterator<CRelatedType2> iterator; };
	MemberElement<CRelatingType2, _altova_mi_altova_CClassification_association_relationship_altova_Relating> Relating;
	struct Relating { typedef Iterator<CRelatingType2> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CClassification_association_relationship_altova_Relationship_type> Relationship_type;
	struct Relationship_type { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_association_relationship
