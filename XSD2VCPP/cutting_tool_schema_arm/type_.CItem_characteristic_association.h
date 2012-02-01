#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_characteristic_association
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_characteristic_association



namespace cutting_tool_schema_arm
{

class CItem_characteristic_association : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CItem_characteristic_association(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CItem_characteristic_association(CItem_characteristic_association const& init);
	void operator=(CItem_characteristic_association const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CItem_characteristic_association); }

	MemberAttribute<string_type,_altova_mi_altova_CItem_characteristic_association_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CItem_characteristic_association_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_characteristicType, _altova_mi_altova_CItem_characteristic_association_altova_Associated_characteristic> Associated_characteristic;
	struct Associated_characteristic { typedef Iterator<CAssociated_characteristicType> iterator; };
	MemberElement<CAssociated_itemType, _altova_mi_altova_CItem_characteristic_association_altova_Associated_item> Associated_item;
	struct Associated_item { typedef Iterator<CAssociated_itemType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CItem_characteristic_association_altova_Relation_type> Relation_type;
	struct Relation_type { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_characteristic_association
