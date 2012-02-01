#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_structure_association
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_structure_association



namespace cutting_tool_schema_arm
{

class CItem_structure_association : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CItem_structure_association(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CItem_structure_association(CItem_structure_association const& init);
	void operator=(CItem_structure_association const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CItem_structure_association); }

	MemberAttribute<string_type,_altova_mi_altova_CItem_structure_association_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CItem_structure_association_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CPlacementType, _altova_mi_altova_CItem_structure_association_altova_Placement> Placement;
	struct Placement { typedef Iterator<CPlacementType> iterator; };
	MemberElement<CRelatedType, _altova_mi_altova_CItem_structure_association_altova_Related> Related;
	struct Related { typedef Iterator<CRelatedType> iterator; };
	MemberElement<CRelatingType, _altova_mi_altova_CItem_structure_association_altova_Relating> Relating;
	struct Relating { typedef Iterator<CRelatingType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_structure_association
