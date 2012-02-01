#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMated_item_relationship
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMated_item_relationship



namespace cutting_tool_schema_arm
{

class CMated_item_relationship : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CMated_item_relationship(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CMated_item_relationship(CMated_item_relationship const& init);
	void operator=(CMated_item_relationship const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CMated_item_relationship); }

	MemberAttribute<string_type,_altova_mi_altova_CMated_item_relationship_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CMated_item_relationship_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CMating_materialType, _altova_mi_altova_CMated_item_relationship_altova_Mating_material> Mating_material;
	struct Mating_material { typedef Iterator<CMating_materialType> iterator; };
	MemberElement<CRelatedType9, _altova_mi_altova_CMated_item_relationship_altova_Related> Related;
	struct Related { typedef Iterator<CRelatedType9> iterator; };
	MemberElement<CRelatingType9, _altova_mi_altova_CMated_item_relationship_altova_Relating> Relating;
	struct Relating { typedef Iterator<CRelatingType9> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMated_item_relationship
