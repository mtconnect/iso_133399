#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGeneral_classification_hierarchy
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGeneral_classification_hierarchy



namespace cutting_tool_schema_arm
{

class CGeneral_classification_hierarchy : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CGeneral_classification_hierarchy(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CGeneral_classification_hierarchy(CGeneral_classification_hierarchy const& init);
	void operator=(CGeneral_classification_hierarchy const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CGeneral_classification_hierarchy); }

	MemberAttribute<string_type,_altova_mi_altova_CGeneral_classification_hierarchy_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CGeneral_classification_hierarchy_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CSub_classificationType, _altova_mi_altova_CGeneral_classification_hierarchy_altova_Sub_classification> Sub_classification;
	struct Sub_classification { typedef Iterator<CSub_classificationType> iterator; };
	MemberElement<CSuper_classificationType, _altova_mi_altova_CGeneral_classification_hierarchy_altova_Super_classification> Super_classification;
	struct Super_classification { typedef Iterator<CSuper_classificationType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGeneral_classification_hierarchy
