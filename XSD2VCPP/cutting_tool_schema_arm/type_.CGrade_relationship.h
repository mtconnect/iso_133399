#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGrade_relationship
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGrade_relationship



namespace cutting_tool_schema_arm
{

class CGrade_relationship : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CGrade_relationship(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CGrade_relationship(CGrade_relationship const& init);
	void operator=(CGrade_relationship const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CGrade_relationship); }

	MemberAttribute<string_type,_altova_mi_altova_CGrade_relationship_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CGrade_relationship_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CRelatedType6, _altova_mi_altova_CGrade_relationship_altova_Related> Related;
	struct Related { typedef Iterator<CRelatedType6> iterator; };
	MemberElement<CRelatingType6, _altova_mi_altova_CGrade_relationship_altova_Relating> Relating;
	struct Relating { typedef Iterator<CRelatingType6> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CGrade_relationship_altova_Relation_type> Relation_type;
	struct Relation_type { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGrade_relationship
