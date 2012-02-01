#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_item_state_association
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_item_state_association



namespace cutting_tool_schema_arm
{

class CPhysical_item_state_association : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPhysical_item_state_association(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPhysical_item_state_association(CPhysical_item_state_association const& init);
	void operator=(CPhysical_item_state_association const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPhysical_item_state_association); }

	MemberAttribute<string_type,_altova_mi_altova_CPhysical_item_state_association_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CPhysical_item_state_association_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_physical_itemType, _altova_mi_altova_CPhysical_item_state_association_altova_Associated_physical_item> Associated_physical_item;
	struct Associated_physical_item { typedef Iterator<CAssociated_physical_itemType> iterator; };
	MemberElement<CAssociated_stateType, _altova_mi_altova_CPhysical_item_state_association_altova_Associated_state> Associated_state;
	struct Associated_state { typedef Iterator<CAssociated_stateType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPhysical_item_state_association_altova_Role> Role;
	struct Role { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_item_state_association
