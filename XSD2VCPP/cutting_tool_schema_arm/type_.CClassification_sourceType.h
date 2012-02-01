#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_sourceType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_sourceType



namespace cutting_tool_schema_arm
{

class CClassification_sourceType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CClassification_sourceType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CClassification_sourceType(CClassification_sourceType const& init);
	void operator=(CClassification_sourceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CClassification_sourceType); }
	MemberElement<CPlib_class_reference, _altova_mi_altova_CClassification_sourceType_altova_Plib_class_reference> Plib_class_reference;
	struct Plib_class_reference { typedef Iterator<CPlib_class_reference> iterator; };
	MemberElement<CDocument, _altova_mi_altova_CClassification_sourceType_altova_Document> Document;
	struct Document { typedef Iterator<CDocument> iterator; };
	MemberElement<CExternal_library_reference, _altova_mi_altova_CClassification_sourceType_altova_External_library_reference> External_library_reference;
	struct External_library_reference { typedef Iterator<CExternal_library_reference> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassification_sourceType
