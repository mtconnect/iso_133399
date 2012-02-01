#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSpecific_item_classification
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSpecific_item_classification



namespace cutting_tool_schema_arm
{

class CSpecific_item_classification : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CSpecific_item_classification(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CSpecific_item_classification(CSpecific_item_classification const& init);
	void operator=(CSpecific_item_classification const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSpecific_item_classification); }

	MemberAttribute<string_type,_altova_mi_altova_CSpecific_item_classification_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CSpecific_item_classification_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_itemType3, _altova_mi_altova_CSpecific_item_classification_altova_Associated_item> Associated_item;
	struct Associated_item { typedef Iterator<CAssociated_itemType3> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CSpecific_item_classification_altova_Classification_name> Classification_name;
	struct Classification_name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CDescriptionType25, _altova_mi_altova_CSpecific_item_classification_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType25> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSpecific_item_classification
